@interface WCMomentsNewDataSeparatorViewModel : NSObject
{
    WCDataItem * _dataItem; // +0x8
    double _width; // +0x10
    double _maxContentWidth; // +0x18
    WCMomentsFinderRecommendationViewModel * _finderRecommendationViewModel; // +0x20
}
+ (id)viewModelWithDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1;
- (void)setWidth:(double)arg1;
- (id)tipsText;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (double)width;
- (double)maxContentWidth;
- (id)finderRecommendationViewModel;
- (void).cxx_destruct;
@end
