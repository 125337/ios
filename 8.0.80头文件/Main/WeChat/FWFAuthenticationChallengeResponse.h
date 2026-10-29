@interface FWFAuthenticationChallengeResponse : NSObject
{
    unsigned long long _disposition; // +0x8
    NSNumber * _credentialIdentifier; // +0x10
}
+ (id)makeWithDisposition:(unsigned long long)arg1 credentialIdentifier:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (unsigned long long)disposition;
- (void)setDisposition:(unsigned long long)arg1;
- (id)credentialIdentifier;
- (void)setCredentialIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
