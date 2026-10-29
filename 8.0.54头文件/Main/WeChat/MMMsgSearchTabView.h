@interface MMMsgSearchTabView : UIView <MMMsgSearchTabViewProtocol>
{
    MMUIActivityIndicatorView * m_activityIndicatorView; // +0x8
    MMUIImageView * m_loadingDoneImageView; // +0x10
    unsigned int _msgSearchType; // +0x18
    unsigned int _msgSearchLoadingType; // +0x1c
    unsigned int _msgSearchViewTitleLeftMargin; // +0x20
    unsigned int _msgSearchViewTitleRightMargin; // +0x24
    unsigned int _msgSearchNumber; // +0x28
    id <MMMsgSearchTabViewDelegate> delegate; // +0x30
    UIColor * _normalColor; // +0x38
    UIColor * _selectedColor; // +0x40
    UIView * _containerView; // +0x48
    UILabel * _titleLabel; // +0x50
    double _fontSize; // +0x58
    UILabel * _numberLabel; // +0x60
    double _numberFontSize; // +0x68
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitleText:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setNormalColor:(id)arg1;
- (void)sizeToFit;
- (double)getTabUnderLineWidth;
- (CGRect)getTitleLabelFrame;
- (double)getMsgSearchType;
- (void)initUI;
- (void)initActivityIndicatorView;
- (void)initLoadingDoneImageView;
- (void)initNumberLabel;
- (double)calculateWidth;
- (id)titleLabel;
- (id)containerView;
- (void)setMsgSearchLoadingType:(unsigned int)arg1;
- (void)setMsgSearchNumber:(unsigned int)arg1;
- (void)updateForState:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)normalColor;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (unsigned int)msgSearchType;
- (void)setMsgSearchType:(unsigned int)arg1;
- (unsigned int)msgSearchLoadingType;
- (unsigned int)msgSearchViewTitleLeftMargin;
- (void)setMsgSearchViewTitleLeftMargin:(unsigned int)arg1;
- (unsigned int)msgSearchViewTitleRightMargin;
- (void)setMsgSearchViewTitleRightMargin:(unsigned int)arg1;
- (unsigned int)msgSearchNumber;
- (void)setContainerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (double)fontSize;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg1;
- (double)numberFontSize;
- (void)setNumberFontSize:(double)arg1;
- (void).cxx_destruct;
@end

