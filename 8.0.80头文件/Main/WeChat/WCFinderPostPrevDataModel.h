@interface WCFinderPostPrevDataModel : NSObject
{
    NSMutableArray * _usualTopicsArray; // +0x8
}
- (id)initWithPrevDataResponse:(id)arg1;
- (void)_filterValidTopics:(id)arg1;
- (id)filterUsualTopicFromPreMatchString:(id)arg1;
- (id)usualTopicsArray;
- (void)setUsualTopicsArray:(id)arg1;
- (void).cxx_destruct;
@end
