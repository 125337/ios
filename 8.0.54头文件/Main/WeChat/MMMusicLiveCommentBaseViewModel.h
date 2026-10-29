@interface MMMusicLiveCommentBaseViewModel : NSObject
{
    int _type; // +0x8
    id <MMMusicLiveCommentBaseViewModelDelegate> _delegate; // +0x10
    unsigned long long _uniqueId; // +0x18
    NSString * _username; // +0x20
    NSString * _headUrl; // +0x28
    NSString * _content; // +0x30
    MMMusicLiveBaseMsg * _msg; // +0x38
    FinderLocation * _location; // +0x40
}
+ (id)modelWithPopMsg:(id)arg1;
- (void)commitUpdate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)uniqueId;
- (void)setUniqueId:(unsigned long long)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void).cxx_destruct;
@end

