@interface _TtC6WeChat26FinderPrivacySettingLikeVM : NSObject
{
     finderContact; // +0x8
     switchStatus; // +0x10
     _shieldHisLikedState; // +0x0
     _shieldMyLikedState; // +0x0
    void * titleText; // +0x0
    void * titleAccessibilityLabel; // +0x0
    int commentScene; // +0x0
    void * extraReportParamsBlock; // +0x0
}
- (unsigned int)currentHideFriendLikes;
- (unsigned int)currentHideMyLikes;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)titleAccessibilityLabel;
- (void)setTitleAccessibilityLabel:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id /* block */)extraReportParamsBlock;
- (void)setExtraReportParamsBlock:(id /* block */)arg1;
- (id)initWithFinderContact:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
