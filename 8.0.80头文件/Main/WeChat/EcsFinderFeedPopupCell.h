@interface EcsFinderFeedPopupCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    EcsRichTextButtonViewModel * _viewDataModel; // +0x8
    UIView * _textContainer; // +0x10
    EcsRichTextLabel * _textLabel; // +0x18
}
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)viewDataModel;
- (id)textContainer;
- (void)setTextContainer:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
