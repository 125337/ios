@interface WAFileViewProxy : NSObject <ForwardMessageLogicDelegate, IWAFileViewService>
{
    ForwardMessageLogicController * _forwardLogic; // +0x8
    UIViewController * _fileViewController; // +0x10
}
+ (id)generateFileLogicControllerWithPath:(id)arg1;
- (void)forwardMessageWithPath:(id)arg1;
- (void)addToFavoritesWithPath:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (id)getCurrentViewController;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)fileViewController;
- (void)setFileViewController:(id)arg1;
- (void).cxx_destruct;
@end

