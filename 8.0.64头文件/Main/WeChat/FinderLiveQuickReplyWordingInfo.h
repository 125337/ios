@interface FinderLiveQuickReplyWordingInfo : NSObject <NSCopying>
{
    unsigned int _flag; // +0x8
    NSMutableArray * _modelList; // +0x10
    NSMutableArray * _initialModelList; // +0x18
    NSString * _wording; // +0x20
}
+ (id)changeQuickReplyModelFromInfo:(id)arg1;
- (id)initWithFinderWordingInfo:(id)arg1;
- (id)getModelListWithWordList:(id)arg1;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)modelList;
- (void)setModelList:(id)arg1;
- (id)initialModelList;
- (void)setInitialModelList:(id)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end
