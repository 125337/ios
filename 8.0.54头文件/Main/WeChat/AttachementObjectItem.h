@interface AttachementObjectItem : NSObject
{
    SEL _selAction; // +0x8
    UIImage * _oImage; // +0x10
    NSString * _nsTitle; // +0x18
    NSObject * _object; // +0x20
    BOOL _isNew; // +0x28
    BOOL _isRedCode; // +0x29
    unsigned int _attachementID; // +0x2c
    NSString * _nsDesc; // +0x30
    NSString * _pathKey; // +0x38
}
- (SEL)selAction;
- (void)setSelAction:(SEL)arg1;
- (id)oImage;
- (void)setOImage:(id)arg1;
- (id)nsTitle;
- (void)setNsTitle:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (BOOL)isNew;
- (void)setIsNew:(BOOL)arg1;
- (BOOL)isRedCode;
- (void)setIsRedCode:(BOOL)arg1;
- (id)nsDesc;
- (void)setNsDesc:(id)arg1;
- (unsigned int)attachementID;
- (void)setAttachementID:(unsigned int)arg1;
- (id)pathKey;
- (void)setPathKey:(id)arg1;
- (void).cxx_destruct;
@end

