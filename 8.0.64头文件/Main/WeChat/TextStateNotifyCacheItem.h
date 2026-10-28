@interface TextStateNotifyCacheItem : NSObject <PBCoding>
{
    unsigned int _doLikeCount; // +0x8
    unsigned int _referenceCount; // +0xc
    unsigned int _commentCount; // +0x10
    NSString * _textStateId; // +0x18
    unsigned long long _doLikeCountVersion; // +0x20
}
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_doLikeCount;
+ (void)PBArrayAdd_referenceCount;
+ (void)PBArrayAdd_doLikeCountVersion;
+ (void)PBArrayAdd_commentCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)count;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (unsigned int)doLikeCount;
- (void)setDoLikeCount:(unsigned int)arg1;
- (unsigned long long)doLikeCountVersion;
- (void)setDoLikeCountVersion:(unsigned long long)arg1;
- (unsigned int)referenceCount;
- (void)setReferenceCount:(unsigned int)arg1;
- (unsigned int)commentCount;
- (void)setCommentCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
