@interface WCFinderPostModelPredictor : NSObject
{
    NSDictionary * _model; // +0x8
}
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)modelVersion;
- (unsigned long long)schemaVersion;
- (unsigned long long)featureSchemaVersion;
- (id)inputFields;
- (BOOL)offlineQualityPassed;
- (id)predictInput:(id)arg1;
- (id)description;
- (id)model;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end
