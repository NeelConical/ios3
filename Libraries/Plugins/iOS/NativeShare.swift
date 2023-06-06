
import Foundation

@objc public class NativeShare : NSObject {
    
    @objc public static let shared = NativeShare()
    
    @objc public func ShareText(text:String, vc:UIViewController) {
        print("Shard text is : " + text)
        
        let textToShare = [ text ]
        let activityViewController = UIActivityViewController(activityItems: textToShare, applicationActivities: nil)
        activityViewController.popoverPresentationController?.sourceView = vc.view // so that iPads won't crash
        
        vc.present(activityViewController, animated: true, completion: nil)
    }
    
    @objc public func ShareFile(paths:String, message:String , vc:UIViewController) {
        //. print("UNITY>> IOS Image path is: " + pathBigString)
        var urls = [Any]()
        let pathsList = paths.components(separatedBy: "<smile123>");
        for i in 0..<pathsList.count {
            let url = NSURL.fileURL(withPath: pathsList[i])
//            print("UNITY>>  swift url : " )
//            print(url)
            urls.append(url)
        }
  
        let activityViewController = UIActivityViewController(activityItems: urls , applicationActivities: nil)
        activityViewController.popoverPresentationController?.sourceView = vc.view // so that iPads won't crash
        
        DispatchQueue.main.async {
            vc.present(activityViewController, animated: true, completion: nil)
        }
    }
 
}
