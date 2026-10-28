@interface FullScreenInputReporter : NSObject
{
    unsigned int _chatType; // +0x8
    NSString * _sessionID; // +0x10
}
+ (id)reporter;
+ (void)reportAction:(unsigned int)arg1;
- (unsigned int)chatType;
- (void)setChatType:(unsigned int)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (void).cxx_destruct;
@end
