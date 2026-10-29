@interface MMFinderLiveReservedRecordView : WCFinderLiveNoticeView
{
    WCFinderContact * _anchorContact; // +0x8
    UIView * _reservedAnchorInfoView; // +0x10
    MMWebImageView * _reservedAnchorAvatarView; // +0x18
    UILabel * _reservedAnchorNicknameLabel; // +0x20
    WCFinderAuthInfoIconView * _reservedAuthorizedIconView; // +0x28
}
+ (double)heightForReservedRecordView:(id)arg1 nextLiveNoticeInfo:(id)arg2 anchorContact:(id)arg3 width:(double)arg4;
+ (double)getTopLabelHeight:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)resetState;
- (void)configureForReservedRecord;
- (void)setupReservedRecordSubviews;
- (void)layoutSubviews;
- (void)layoutNoticeInfoReservedRecord;
- (void)layoutNextLiveReservedRecord;
- (void)layoutAnchorInfoSubviews;
- (void)updateWithNoticeInfo:(id)arg1 anchorContact:(id)arg2;
- (void)updateWithNextLiveNoticeInfo:(id)arg1 anchorContact:(id)arg2;
- (void)updateAnchorInfo;
- (void)onMainNoticeButtonClicked:(id)arg1;
- (void)onAnchorInfoTapped;
- (void)setShowCoveredStyle:(BOOL)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)reservedAnchorInfoView;
- (void)setReservedAnchorInfoView:(id)arg1;
- (id)reservedAnchorAvatarView;
- (void)setReservedAnchorAvatarView:(id)arg1;
- (id)reservedAnchorNicknameLabel;
- (void)setReservedAnchorNicknameLabel:(id)arg1;
- (id)reservedAuthorizedIconView;
- (void)setReservedAuthorizedIconView:(id)arg1;
- (void).cxx_destruct;
@end
