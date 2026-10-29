@interface OldAccountContact : NSObject <PBCoding>
{
    unsigned int _sequence; // +0x8
    unsigned int _status; // +0xc
    NSString * _username; // +0x10
    NSString * _ticket; // +0x18
    NSString * _nickname; // +0x20
    NSString * _encryptedUsername; // +0x28
    NSString * _friendRequest; // +0x30
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_sequence;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_encryptedUsername;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_friendRequest;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithOldAcctFriend:(id)arg1;
- (id)description;
- (id)availableUsername;
- (void)mergeOldAccountContact:(id)arg1;
- (long long)compareOldAccountFriendAscending:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (unsigned int)sequence;
- (void)setSequence:(unsigned int)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)encryptedUsername;
- (void)setEncryptedUsername:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)friendRequest;
- (void)setFriendRequest:(id)arg1;
- (void).cxx_destruct;
@end

