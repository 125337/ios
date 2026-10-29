@interface _TtC6WeChat30WCFinderSeeLaterStateModParams : NSObject
{
    UIView * tipsContainerView; // +0x8
    BOOL tipsForbidJumpToLongVideo; // +0x10
    BOOL showTipsAfterSuc; // +0x11
    WCFinderFeedContentVM * contentVM; // +0x18
    BOOL seeLaterState; // +0x20
    BOOL disableTips; // +0x21
}
- (id)tipsContainerView;
- (void)setTipsContainerView:(id)arg1;
- (BOOL)tipsForbidJumpToLongVideo;
- (void)setTipsForbidJumpToLongVideo:(BOOL)arg1;
- (BOOL)showTipsAfterSuc;
- (void)setShowTipsAfterSuc:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)seeLaterState;
- (void)setSeeLaterState:(BOOL)arg1;
- (BOOL)disableTips;
- (void)setDisableTips:(BOOL)arg1;
- (id)initWithContentVM:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
