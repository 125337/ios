@interface BaseReq : NSObject
{
    int type; // +0x8
    NSString * openID; // +0x10
}
- (id)init;
- (int)type;
- (void)setType:(int)arg1;
- (id)openID;
- (void)setOpenID:(id)arg1;
- (void).cxx_destruct;
@end

