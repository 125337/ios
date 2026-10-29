@interface DownloadFileCache : NSObject <PBCoding>
{
    unsigned int _localID; // +0x8
    unsigned int _lastReadTime; // +0xc
    NSString * _MD5; // +0x10
    NSString * _chatName; // +0x18
}
+ (void)PBArrayAdd_MD5;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_localID;
+ (void)PBArrayAdd_lastReadTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)MD5;
- (void)setMD5:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (unsigned int)lastReadTime;
- (void)setLastReadTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
