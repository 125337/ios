@interface MMLiveRewardGiftNewCustomizationStyleSelectContentView : UIView <ILinkEventExt>
{
    long long _contentMode; // +0x8
    UIView * _contentView; // +0x10
    RichTextView * _unsupportTipLabel; // +0x18
    MMFinderLiveNewCustomGiftComponent * _currentConflictComponent; // +0x20
    CGSize _selfSize; // +0x28
}
- (void)layoutUI;
- (void)checkSelfSizeChanged;
- (void)layoutContentView;
- (void)layoutUnSupportTipLabel;
- (void)updateUnSupportTipLabelOrigin;
- (id)styleObj;
- (void)updateContentMode:(long long)arg1;
- (void)updateUIForCurrentContentMode;
- (void)updateUnSupportTipWithConflictComponent:(id)arg1;
- (id)getUnSupportTipWithConflictComponent:(id)arg1;
- (void)onUnSupportTipLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)changeToUnSupportModeForConflictComponent:(id)arg1;
- (void)changeToNormalMode;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (long long)contentMode;
- (void)setContentMode:(long long)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)unsupportTipLabel;
- (void)setUnsupportTipLabel:(id)arg1;
- (id)currentConflictComponent;
- (void)setCurrentConflictComponent:(id)arg1;
- (CGSize)selfSize;
- (void)setSelfSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

