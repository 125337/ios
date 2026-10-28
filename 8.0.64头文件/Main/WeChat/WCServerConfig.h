@interface WCServerConfig : NSObject
{
    unsigned int _postMentionLimit; // +0x8
    unsigned int _postTogetherLimit; // +0xc
    unsigned int _pasteLengthLimit; // +0x10
    int _tiger2022PostStatus; // +0x14
    int _tiger2022SourceStatus; // +0x18
    int _firstPageCount; // +0x1c
    int _nextPageCount; // +0x20
    SnsServerConfig * _pbServerConfig; // +0x28
}
- (id)init;
- (id)initWithPbObject:(id)arg1;
- (id)pbServerConfig;
- (unsigned int)postMentionLimit;
- (void)setPostMentionLimit:(unsigned int)arg1;
- (unsigned int)postTogetherLimit;
- (void)setPostTogetherLimit:(unsigned int)arg1;
- (unsigned int)pasteLengthLimit;
- (void)setPasteLengthLimit:(unsigned int)arg1;
- (int)tiger2022PostStatus;
- (void)setTiger2022PostStatus:(int)arg1;
- (int)tiger2022SourceStatus;
- (void)setTiger2022SourceStatus:(int)arg1;
- (int)firstPageCount;
- (void)setFirstPageCount:(int)arg1;
- (int)nextPageCount;
- (void)setNextPageCount:(int)arg1;
- (void).cxx_destruct;
@end
