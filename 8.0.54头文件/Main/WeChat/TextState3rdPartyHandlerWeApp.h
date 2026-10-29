@interface TextState3rdPartyHandlerWeApp : TextState3rdPartyBaseHandler
{
    TextStateWeAppBuffer * _buffer; // +0x8
}
- (unsigned int)type;
- (BOOL)supportCustomMedia;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (BOOL)preferCustomView;
- (id)customView;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)username;
- (id)path;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (void).cxx_destruct;
@end

