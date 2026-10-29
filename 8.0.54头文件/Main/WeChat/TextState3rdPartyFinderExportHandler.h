@interface TextState3rdPartyFinderExportHandler : TextState3rdPartyBaseHandler
{
    StatusFooterJumpFinderFeedByExportId * _finderInfo; // +0x8
}
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (unsigned int)type;
- (BOOL)preferCustomView;
- (id)customView;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)finderInfo;
- (void)setFinderInfo:(id)arg1;
- (void).cxx_destruct;
@end

