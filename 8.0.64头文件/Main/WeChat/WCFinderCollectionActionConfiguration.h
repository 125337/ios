@interface WCFinderCollectionActionConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem>
{
    id /* block */ _didTapShareButton; // +0x8
    id /* block */ _didTapFavoritesButton; // +0x10
    NSDictionary * _reportParams; // +0x18
}
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (double)itemHeightWithLayoutEnvironment:(id)arg1 context:(id)arg2;
- (id /* block */)didTapShareButton;
- (void)setDidTapShareButton:(id /* block */)arg1;
- (id /* block */)didTapFavoritesButton;
- (void)setDidTapFavoritesButton:(id /* block */)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (void).cxx_destruct;
@end
