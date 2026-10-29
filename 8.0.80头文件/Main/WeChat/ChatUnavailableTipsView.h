@interface ChatUnavailableTipsView : MMUIView <ILinkEventExt>
{
    MMUIImageView * _iconView; // +0x8
    id <ChatUnavailableTipsViewDelegate> _delegate; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 type:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)titleForType:(long long)arg1;
- (BOOL)hasIconViewForType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
