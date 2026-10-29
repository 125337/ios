@interface WCAccountTextFieldItem : WCBaseTextFieldItem
{
    BOOL m_bUseGrayColor; // +0x4e
    UILabel * m_labelTip; // +0x50
}
- (void)initView:(CGRect)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 useGrayBackgroundColor:(BOOL)arg4;
- (void)initView:(CGRect)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)initView:(CGRect)arg1 leftMargin:(double)arg2;
- (void)initView:(CGRect)arg1;
- (void)setLeftTitleColor:(id)arg1;
- (void)adjustFieldItemWidth:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setTextContentType:(id)arg1;
- (void).cxx_destruct;
@end

