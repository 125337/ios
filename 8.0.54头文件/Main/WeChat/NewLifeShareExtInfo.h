@interface NewLifeShareExtInfo : NSObject <NSCoding, NSCopying, PBCoding>
{
    double _createTime; // +0x8
    FinderNewLifeInfo * _info; // +0x10
    FinderNewLifeDesc * _desc; // +0x18
    FinderLocation * _location; // +0x20
    long long _commentEggCount; // +0x28
    long long _activityType; // +0x30
    long long _isInnerQuickShare; // +0x38
}
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_info;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_commentEggCount;
+ (void)PBArrayAdd_activityType;
+ (void)PBArrayAdd_isInnerQuickShare;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (long long)commentEggCount;
- (void)setCommentEggCount:(long long)arg1;
- (long long)activityType;
- (void)setActivityType:(long long)arg1;
- (long long)isInnerQuickShare;
- (void)setIsInnerQuickShare:(long long)arg1;
- (void).cxx_destruct;
@end

