@interface WCFinderProfilePostTipsInfo : NSObject <PBCoding>
{
    BOOL _isPreloading; // +0x8
    int _scene; // +0xc
    NSString * _words; // +0x10
    NSString * _coverUrl; // +0x18
    NSData * _postTipsStreamCGIByPass; // +0x20
    NSString * _title; // +0x28
    NSString * _operationName; // +0x30
    MusicPostTipsDetail * _musicTipsInfo; // +0x38
    unsigned long long _createTime; // +0x40
}
+ (void)PBArrayAdd_words;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_postTipsStreamCGIByPass;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_operationName;
+ (void)PBArrayAdd_isPreloading;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_musicTipsInfo;
+ (void)initialize;
+ (id)infoWithResp:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithResp:(id)arg1;
- (BOOL)isExpired;
- (id)description;
- (id)words;
- (void)setWords:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)postTipsStreamCGIByPass;
- (void)setPostTipsStreamCGIByPass:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)operationName;
- (void)setOperationName:(id)arg1;
- (BOOL)isPreloading;
- (void)setIsPreloading:(BOOL)arg1;
- (id)musicTipsInfo;
- (void)setMusicTipsInfo:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
