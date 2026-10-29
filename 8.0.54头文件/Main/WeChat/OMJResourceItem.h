@interface OMJResourceItem : NSObject
{
    NSString * _templateID; // +0x8
    NSString * _musicID; // +0x10
}
- (id)initWithTemplateID:(id)arg1;
- (id)initWithMusicID:(id)arg1;
- (id)initWithTemplateID:(id)arg1 musicID:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)templateID;
- (id)musicID;
- (void).cxx_destruct;
@end

