@interface RespWrap : NSObject
{
    int errType; // +0x8
    int errCode; // +0xc
    unsigned int eventID; // +0x10
}
- (int)errType;
- (void)setErrType:(int)arg1;
- (int)errCode;
- (void)setErrCode:(int)arg1;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
@end
