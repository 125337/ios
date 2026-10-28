@interface WCAdHalfScreenCombineFollowView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, WCAdFollowItemViewDelegate>
{
    BOOL _isBrandFollowed; // +0x8
    BOOL _isFinderFollowed; // +0x9
    id <WCAdHalfScreenCombineFollowViewDelegate> _delegate; // +0x10
    WCAdCombineFollowInfo * _combineFollowInfo; // +0x18
    WCAdURLImageView * _headImageView; // +0x20
    MMUILabel * _headTitleLabel; // +0x28
    WCAdFollowItemView * _brandFollowItemView; // +0x30
    WCAdFollowItemView * _finderFollowItemView; // +0x38
}
- (id)initWithCombineFollowInfo:(id)arg1 isBrandFollowed:(BOOL)arg2 isFinderFollowed:(BOOL)arg3;
- (void)initSubview;
- (void)initCommonUI;
- (void)initDetailUI;
- (id)genDividerView:(double)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onCheckStateChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)combineFollowInfo;
- (void)setCombineFollowInfo:(id)arg1;
- (BOOL)isBrandFollowed;
- (void)setIsBrandFollowed:(BOOL)arg1;
- (BOOL)isFinderFollowed;
- (void)setIsFinderFollowed:(BOOL)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)headTitleLabel;
- (void)setHeadTitleLabel:(id)arg1;
- (id)brandFollowItemView;
- (void)setBrandFollowItemView:(id)arg1;
- (id)finderFollowItemView;
- (void)setFinderFollowItemView:(id)arg1;
- (void).cxx_destruct;
@end
