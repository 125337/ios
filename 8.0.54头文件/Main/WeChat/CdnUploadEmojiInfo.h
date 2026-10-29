@interface CdnUploadEmojiInfo : NSObject
{
    NSString * _filePath; // +0x8
    NSString * _clientMsgId; // +0x10
    long long _emojiType; // +0x18
    NSData * _extInfo; // +0x20
    unsigned long long _startTime; // +0x28
}
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (long long)emojiType;
- (void)setEmojiType:(long long)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

