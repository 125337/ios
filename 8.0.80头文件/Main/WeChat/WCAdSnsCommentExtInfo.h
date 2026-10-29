@interface WCAdSnsCommentExtInfo : NSObject <NSCoding, PBCoding>
{
    NSDictionary * _adTopicList; // +0x8
}
+ (void)PBArrayAdd_adTopicList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithAdExtInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)parseTopicListWithTopicList:(id)arg1;
- (id)adTopicList;
- (void)setAdTopicList:(id)arg1;
- (void).cxx_destruct;
@end
