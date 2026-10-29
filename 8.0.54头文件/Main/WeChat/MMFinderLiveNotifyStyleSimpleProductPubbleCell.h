@interface MMFinderLiveNotifyStyleSimpleProductPubbleCell : MMFinderLiveNotifyStyleBaseProductPubbleCell
{
    MMGradientView * _gradientView; // +0x30
    UILabel * _descriptionLabel; // +0x38
}
- (id)initWithCellFrame:(id)arg1;
- (void)layoutUI;
- (void)didMoveToWindow;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end

