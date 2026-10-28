@interface ActionBase : NSObject <NSCoding>
{
    int _actionType; // +0x8
    int _showType; // +0xc
    NSString * _key; // +0x10
    id _actionItem; // +0x18
    NSString * _imageUrl; // +0x20
    NSString * _statId; // +0x28
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)actionItem;
- (void)setActionItem:(id)arg1;
- (int)showType;
- (void)setShowType:(int)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)statId;
- (void)setStatId:(id)arg1;
- (void).cxx_destruct;
@end
