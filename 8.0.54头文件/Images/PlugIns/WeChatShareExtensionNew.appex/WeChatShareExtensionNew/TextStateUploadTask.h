@interface TextStateUploadTask : NSObject
{
    NSString * _clientID; // +0x8
    NSMutableArray * _mediaList; // +0x10
    NSDate * _createTime; // +0x18
    long long _postSource; // +0x20
    NSString * _iconId; // +0x28
}
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (id)createTime;
- (void)setCreateTime:(id)arg1;
- (long long)postSource;
- (void)setPostSource:(long long)arg1;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (void).cxx_destruct;
@end

