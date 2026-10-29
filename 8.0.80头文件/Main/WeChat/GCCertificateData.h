@interface GCCertificateData : NSObject
{
    NSString * _md5; // +0x8
    NSString * _issuer; // +0x10
    NSString * _subject; // +0x18
    NSData * _certificateData; // +0x20
    NSString * _x509desc; // +0x28
    NSMutableArray * _urlArray; // +0x30
}
- (id)init;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)issuer;
- (void)setIssuer:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)certificateData;
- (void)setCertificateData:(id)arg1;
- (id)x509desc;
- (void)setX509desc:(id)arg1;
- (id)urlArray;
- (void)setUrlArray:(id)arg1;
- (void).cxx_destruct;
@end
