@interface MMFinderLiveConnectMicCollectionSingleColumnFooterView : UICollectionReusableView
{
    MMFinderLiveConnectedMicHintCollectionViewCell * _hintView; // +0x8
    MMFinderLiveConnectedMicOperationCollectionCellView * _operationView; // +0x10
}
+ (id)ReuseIdentifier;
- (void)showHintView;
- (void)showOperationView;
- (void)showBlankView;
- (id)initWithFrame:(CGRect)arg1;
- (id)makeHintViewWithFrame:(CGRect)arg1;
- (id)makeOperationViewWithFrame:(CGRect)arg1;
- (id)hintView;
- (void)setHintView:(id)arg1;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (void).cxx_destruct;
@end
