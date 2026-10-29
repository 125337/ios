@interface CameraScanBlackScreenPredictor : NSObject
{
    shared_ptr<xnet::dnn::DnnInferenceModel> _model; // +0x8
    vector<std::string, std::allocator<std::string>> _catFeatures; // +0x18
    vector<std::string, std::allocator<std::string>> _numFeatures; // +0x30
    vector<std::unordered_map<std::string, int>, std::allocator<std::unordered_map<std::string, int>>> _catEncoders; // +0x48
    vector<int, std::allocator<int>> _catUnkIndex; // +0x60
    basic_string<char, std::char_traits<char>, std::allocator<char>> _unkToken; // +0x78
    basic_string<char, std::char_traits<char>, std::allocator<char>> _externalFeatureName; // +0x90
    int _externalIndex; // +0xa8
    int _externalDim; // +0xac
    vector<float, std::allocator<float>> _numMean; // +0xb0
    vector<float, std::allocator<float>> _numScale; // +0xc8
    unordered_map<std::string, float, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, float>>> _clipThresholds; // +0xe0
    float _deployThreshold; // +0x108
    int _catInputDtypeIsInt32; // +0x10c
    unordered_map<std::string, std::vector<float>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> _deviceEmbTable; // +0x110
    unordered_map<std::string, (anonymous namespace)::DeviceStats, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::DeviceStats>>> _deviceStatsTable; // +0x138
    vector<std::string, std::allocator<std::string>> _deviceStatsFields; // +0x160
    unordered_map<std::string, float, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, float>>> _deviceGlobalStats; // +0x178
    vector<float, std::allocator<float>> _deviceUnkVec; // +0x1a0
    basic_string<char, std::char_traits<char>, std::allocator<char>> _deviceEmbVersion; // +0x1b8
}
- (id)initWithXNetPath:(id)arg1 metaPath:(id)arg2 deviceEmbeddingPath:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (float)deployThreshold;
- (BOOL)isReady;
- (id)catFeatures;
- (id)numFeatures;
- (id)externalFeatureName;
- (id)deviceEmbeddingVersion;
- (unsigned long long)deviceEmbeddingEntryCount;
- (BOOL)_loadMetaFromPath:(id)arg1 error:(id *)arg2;
- (BOOL)_loadXNetModelFromPath:(id)arg1 error:(id *)arg2;
- (BOOL)reloadDeviceEmbeddingAtPath:(id)arg1 error:(id *)arg2;
- (id)predictRecord:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
