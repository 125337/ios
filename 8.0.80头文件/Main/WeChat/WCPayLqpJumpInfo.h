@interface WCPayLqpJumpInfo : NSObject
{
    unsigned int _type; // +0x8
    NSString * _url; // +0x10
    NSString * _mini_username; // +0x18
    NSString * _mini_pagepath; // +0x20
}
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)mini_username;
- (void)setMini_username:(id)arg1;
- (id)mini_pagepath;
- (void)setMini_pagepath:(id)arg1;
- (void).cxx_destruct;
@end
