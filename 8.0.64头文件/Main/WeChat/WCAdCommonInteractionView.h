@interface WCAdCommonInteractionView : UIView
{
    WCAdCommonInteractionInfo * _interactionInfo; // +0x8
    ColorGradientView * _bottomGradientView; // +0x10
    UIImageView * _iconView; // +0x18
    MMUILabel * _descLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 interactionInfo:(id)arg2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)bottomGradientView;
- (id)iconView;
- (id)descLabel;
- (BOOL)isContentWordingVisible;
- (id)interactionInfo;
- (void)setInteractionInfo:(id)arg1;
- (void)setBottomGradientView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
