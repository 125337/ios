@interface AppStandardContentExternalLoadImageDelegateWrap : NSObject
{
    BOOL _didLoadDone; // +0x8
    BOOL _didLoadFail; // +0x9
    id <AppStandardContentExternalLoadImageDelegate> _delegate; // +0x10
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)didLoadDone;
- (void)setDidLoadDone:(BOOL)arg1;
- (BOOL)didLoadFail;
- (void)setDidLoadFail:(BOOL)arg1;
- (void).cxx_destruct;
@end
