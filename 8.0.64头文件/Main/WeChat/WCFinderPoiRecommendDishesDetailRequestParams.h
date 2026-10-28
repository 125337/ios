@interface WCFinderPoiRecommendDishesDetailRequestParams : NSObject
{
    int _commentScene; // +0x8
    NSString * _poiId; // +0x10
    unsigned long long _topicId; // +0x18
    NSString * _poiBasicInfoBypassData; // +0x20
}
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)poiBasicInfoBypassData;
- (void)setPoiBasicInfoBypassData:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
