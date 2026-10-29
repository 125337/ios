@interface WCAdRandomSelectCardTitleView : UIView
{
    id <WCAdRandomSelectCardTitleViewDelegate> _delegate; // +0x8
    MMUILabel * _titleLabelView; // +0x10
    UIView * _selectLabelContainer; // +0x18
    MMUILabel * _introduceTitleView; // +0x20
    MMUILabel * _selectDescView; // +0x28
    MMUILabel * _selectedCountTitleView; // +0x30
    MMUILabel * _doneTitleView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)titleLabelView;
- (id)selectLabelContainer;
- (id)introduceTitleView;
- (id)selectDescView;
- (id)selectedCountTitleView;
- (id)doneTitleView;
- (id)randomSelectCardInfo;
- (id)fetchSelectDescText;
- (id)fetchSelectedCountText;
- (BOOL)updateDescWording;
- (BOOL)updateSelectedTitleWording;
- (void)updateWordings;
- (id)randomSelectCardLogic;
- (void)prepareForIntroduceAnimation;
- (void)prepareForSelectingAnimation;
- (void)prepareForAllSelected;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabelView:(id)arg1;
- (void)setSelectLabelContainer:(id)arg1;
- (void)setIntroduceTitleView:(id)arg1;
- (void)setSelectDescView:(id)arg1;
- (void)setSelectedCountTitleView:(id)arg1;
- (void)setDoneTitleView:(id)arg1;
- (void).cxx_destruct;
@end
