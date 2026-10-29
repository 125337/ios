@interface TextStateHistoryInfo : NSObject <PBCoding>
{
    unsigned int _interactionCount; // +0x8
    unsigned int _createTime; // +0xc
    unsigned long long _key; // +0x10
    NSString * _iconId; // +0x18
    NSString * _customIconDescription; // +0x20
    NSString * _topicId; // +0x28
    NSString * _textStateId; // +0x30
    NSDate * _createDate; // +0x38
    NSString * _defaultImageId; // +0x40
    TextStateModel * _textState; // +0x48
}
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_interactionCount;
+ (void)PBArrayAdd_defaultImageId;
+ (void)PBArrayAdd_customIconDescription;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithHistory:(id)arg1 isSummary:(BOOL)arg2;
- (id)initWithTextStateModel:(id)arg1;
- (BOOL)updateTextStateFromHistory:(id)arg1;
- (id)createDate;
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (id)customIconDescription;
- (void)setCustomIconDescription:(id)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (unsigned int)interactionCount;
- (void)setInteractionCount:(unsigned int)arg1;
- (void)setCreateDate:(id)arg1;
- (id)defaultImageId;
- (void)setDefaultImageId:(id)arg1;
- (id)textState;
- (void)setTextState:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

