@interface ActionList : NSObject <NSCoding>
{
    int _type; // +0x8
    int _showType; // +0xc
    NSString * _key; // +0x10
    NSString * _iconUrl; // +0x18
    NSString * _title; // +0x20
    NSMutableArray * _actions; // +0x28
    double _iconWidth; // +0x30
    double _iconHeight; // +0x38
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (int)type;
- (void)setType:(int)arg1;
- (int)showType;
- (void)setShowType:(int)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (double)iconWidth;
- (void)setIconWidth:(double)arg1;
- (double)iconHeight;
- (void)setIconHeight:(double)arg1;
- (void).cxx_destruct;
@end

