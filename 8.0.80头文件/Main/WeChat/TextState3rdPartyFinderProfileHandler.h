@interface TextState3rdPartyFinderProfileHandler : TextState3rdPartyBaseHandler
{
    StatusFooterJumpFinderProfile * _finderProfile; // +0x8
}
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (unsigned int)type;
- (BOOL)preferCustomView;
- (id)customView;
- (id)customViewIconURL;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)finderProfile;
- (void)setFinderProfile:(id)arg1;
- (void).cxx_destruct;
@end
