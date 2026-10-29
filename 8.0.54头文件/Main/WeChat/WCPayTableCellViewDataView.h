@interface WCPayTableCellViewDataView : UIView
{
    BOOL _hasLine; // +0x8
    BOOL _sizeAdaptFont; // +0x9
    id <WCPayTableCellViewNumberExt> _numberDelegate; // +0x10
    TableCellViewData * _viewData; // +0x18
    RedDot * _m_reddot; // +0x20
    UIView * _m_background; // +0x28
    WCPayWebImageView * _m_icon; // +0x30
    KindaRichLabelViewV2 * _m_title; // +0x38
    WCPayRoundTextViewDataView * _m_tagView; // +0x40
    KindaRichLabelViewV2 * _m_subTitle; // +0x48
    KindaRichLabelViewV2 * _m_desc; // +0x50
    KindaRichLabelViewV2 * _m_subDesc; // +0x58
    WCPayWebImageView * _m_rightIcon; // +0x60
    MMBadgeView * _m_reddotImageView; // +0x68
    UIView * _m_lineView; // +0x70
    id <WCPayVoidCallbackDelegate> _m_delegate; // +0x78
    UIImage * _m_rightIconImage; // +0x80
    UIView * _m_numberView; // +0x88
}
+ (double)dyCellHeight:(double)arg1 sizeAdaptFont:(BOOL)arg2;
+ (double)contentHeightWithViewData:(id)arg1 width:(double)arg2 titleLinesOfNonSubTitle:(int)arg3;
+ (double)contentHeightWithViewData:(id)arg1 width:(double)arg2 titleLinesOfNonSubTitle:(int)arg3 sizeAdaptFont:(BOOL)arg4;
- (double)dyLen:(double)arg1;
- (double)dyCellHeight:(double)arg1;
- (void)updateViewData:(id)arg1 RedDot:(id)arg2 delegate:(id)arg3;
- (void)updateViewData:(id)arg1 RedDot:(id)arg2 delegate:(id)arg3 rightIcon:(id)arg4;
- (id)getDescView;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateNumberView;
- (void)updateBackground;
- (void)updateIcon;
- (void)updateTitle;
- (void)updateSubTitle;
- (void)updateTagView;
- (BOOL)hasTag;
- (void)updateRedDotImageView;
- (void)updateDesc;
- (void)updateSubDesc;
- (void)updateDescVertical;
- (void)updateTitleVertical;
- (void)updateRightIcon;
- (void)updateLineView;
- (void)setTitleLines:(int)arg1;
- (id)m_title;
- (id)m_background;
- (id)getAccessibilityLabelString;
- (BOOL)isReddotLayoutOnRight;
- (BOOL)hasLine;
- (void)setHasLine:(BOOL)arg1;
- (id)numberDelegate;
- (void)setNumberDelegate:(id)arg1;
- (BOOL)sizeAdaptFont;
- (void)setSizeAdaptFont:(BOOL)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (id)m_reddot;
- (void)setM_reddot:(id)arg1;
- (void)setM_background:(id)arg1;
- (id)m_icon;
- (void)setM_icon:(id)arg1;
- (void)setM_title:(id)arg1;
- (id)m_tagView;
- (void)setM_tagView:(id)arg1;
- (id)m_subTitle;
- (void)setM_subTitle:(id)arg1;
- (id)m_desc;
- (void)setM_desc:(id)arg1;
- (id)m_subDesc;
- (void)setM_subDesc:(id)arg1;
- (id)m_rightIcon;
- (void)setM_rightIcon:(id)arg1;
- (id)m_reddotImageView;
- (void)setM_reddotImageView:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_rightIconImage;
- (void)setM_rightIconImage:(id)arg1;
- (id)m_numberView;
- (void)setM_numberView:(id)arg1;
- (void).cxx_destruct;
@end

