@interface WCFinderInspirationSquareFlowCellViewModel : NSObject <WCFinderPostPlaySquareExt>
{
    BOOL _isFav; // +0x8
    NSString * _title; // +0x10
    NSString * _subTitle; // +0x18
    unsigned long long _topicId; // +0x20
    NSArray * _dataItemArray; // +0x28
}
+ (id)viewmodelWithContainer:(id)arg1;
- (void)onPostPlayInfoFavFlagChange:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)dataItemArray;
- (void)setDataItemArray:(id)arg1;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (void).cxx_destruct;
@end
