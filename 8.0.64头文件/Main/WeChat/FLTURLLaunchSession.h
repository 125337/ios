@interface FLTURLLaunchSession : NSObject <SFSafariViewControllerDelegate>
{
    id /* block */ _flutterResult; // +0x8
    NSURL * _url; // +0x10
    SFSafariViewController * _safari; // +0x18
    id /* block */ _didFinish; // +0x20
}
- (id)initWithUrl:(id)arg1 withFlutterResult:(id)arg2;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(BOOL)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)close;
- (id /* block */)flutterResult;
- (void)setFlutterResult:(id /* block */)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)safari;
- (void)setSafari:(id)arg1;
- (id /* block */)didFinish;
- (void)setDidFinish:(id /* block */)arg1;
- (void).cxx_destruct;
@end
