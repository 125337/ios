@interface GCRecommendGroupCell : GameChatBaseGroupCell
{
    UIImageView * _lockImgView; // +0x8
    MMWebImageView * _userImgView; // +0x10
    UILabel * _onlyLabel; // +0x18
    UIView * _conditonViewContainer; // +0x20
    UIView * _conditionViewWithSpace; // +0x28
    UIView * _bulletMsgContainer; // +0x30
    GCTagLineView * _tagLineView; // +0x38
    UIButton * _rightBtn; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)myGroupCellLayout;
- (void)setUpConditionViewWithModel:(id)arg1 conditionMaxWidth:(double)arg2;
- (void)configureWithCellModel:(id)arg1;
- (void)onRightBtnClicked:(id)arg1;
- (double)verticalAlignCenterY;
- (id)verticalAlignArrary;
- (id)lockImgView;
- (void)setLockImgView:(id)arg1;
- (id)userImgView;
- (void)setUserImgView:(id)arg1;
- (id)onlyLabel;
- (void)setOnlyLabel:(id)arg1;
- (id)conditonViewContainer;
- (void)setConditonViewContainer:(id)arg1;
- (id)conditionViewWithSpace;
- (void)setConditionViewWithSpace:(id)arg1;
- (id)bulletMsgContainer;
- (void)setBulletMsgContainer:(id)arg1;
- (id)tagLineView;
- (void)setTagLineView:(id)arg1;
- (id)rightBtn;
- (void)setRightBtn:(id)arg1;
- (void).cxx_destruct;
@end
