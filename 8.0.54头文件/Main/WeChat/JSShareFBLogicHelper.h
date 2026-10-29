@interface JSShareFBLogicHelper : MMObject <ShareConfirmViewDelegate, PBMessageObserverDelegate>
{
    ShareConfirmView * _confirmView; // +0x8
    unsigned int fbEventID; // +0x10
    id <JSShareFBLogicHelperDelegate> _delegate; // +0x18
    NSString * _link; // +0x20
    NSString * _thumbImageUrl; // +0x28
}
- (id)initWithTitle:(id)arg1 link:(id)arg2 description:(id)arg3 thumbURL:(id)arg4;
- (void)dealloc;
- (void)initConfirmViewWithTitle:(id)arg1 description:(id)arg2 thumbURL:(id)arg3;
- (void)showConfirmView;
- (void)OnSend:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnError:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)rotateToOrientaion:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)thumbImageUrl;
- (void)setThumbImageUrl:(id)arg1;
- (void).cxx_destruct;
@end

