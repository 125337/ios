@interface WCFinderCommentDetailAvatarUpdateInfo : NSObject
{
    NSString * _url; // +0x8
    NSString * _nickname; // +0x10
    unsigned long long _type; // +0x18
    unsigned long long _imageDisplayStyle; // +0x20
}
- (id)initWithUrl:(id)arg1 nickname:(id)arg2 type:(unsigned long long)arg3 imageDisplayStyle:(unsigned long long)arg4;
- (id)url;
- (id)nickname;
- (unsigned long long)type;
- (unsigned long long)imageDisplayStyle;
- (void).cxx_destruct;
@end

