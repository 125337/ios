#!/bin/bash

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${GREEN}========================================${NC}"
echo -e "${GREEN}    IPA重签名工具${NC}"
echo -e "${GREEN}========================================${NC}"

if [ $# -lt 2 ]; then
    echo -e "${YELLOW}用法:${NC}"
    echo "  $0 <IPA路径> <证书名称> [配置文件路径] [输出目录]"
    echo ""
    echo -e "${YELLOW}示例:${NC}"
    echo "  $0 WeChat_injected.ipa \"Apple Development\" ./mobileprovision.mobileprovision ./output"
    exit 1
fi

IPA_PATH="$1"
CERT_NAME="$2"
PROVISION_PATH="${3:-}"
OUTPUT_DIR="${4:-./output}"
TEMP_DIR="./temp_sign_$$"

if [ ! -f "$IPA_PATH" ]; then
    echo -e "${RED}错误: IPA文件不存在: $IPA_PATH${NC}"
    exit 1
fi

echo -e "${YELLOW}[1/7] 创建工作目录...${NC}"
rm -rf "$TEMP_DIR"
mkdir -p "$TEMP_DIR"
mkdir -p "$OUTPUT_DIR"

echo -e "${YELLOW}[2/7] 解压IPA...${NC}"
unzip -q "$IPA_PATH" -d "$TEMP_DIR"

PAYLOAD_DIR="$TEMP_DIR/Payload"
APP_PATH=$(find "$PAYLOAD_DIR" -name "*.app" -type d | head -1)
APP_NAME=$(basename "$APP_PATH" .app)
BINARY_PATH="$APP_PATH/$APP_NAME"

echo -e "${YELLOW}[3/7] 处理配置文件...${NC}"
if [ -n "$PROVISION_PATH" ] && [ -f "$PROVISION_PATH" ]; then
    cp "$PROVISION_PATH" "$APP_PATH/embedded.mobileprovision"
    
    ENTITLEMENTS_PATH="$TEMP_DIR/entitlements.plist"
    security cms -D -i "$PROVISION_PATH" > "$TEMP_DIR/provision.plist"
    plutil -extract Entitlements raw "$TEMP_DIR/provision.plist" -o "$ENTITLEMENTS_PATH" 2>/dev/null || {
        echo -e "${YELLOW}警告: 无法提取entitlements，使用默认配置${NC}"
        echo '<?xml version="1.0" encoding="UTF-8"?><!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd"><plist version="1.0"><dict></dict></plist>' > "$ENTITLEMENTS_PATH"
    }
else
    ENTITLEMENTS_PATH="$TEMP_DIR/entitlements.plist"
    echo '<?xml version="1.0" encoding="UTF-8"?><!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd"><plist version="1.0"><dict></dict></plist>' > "$ENTITLEMENTS_PATH"
fi

echo -e "${YELLOW}[4/7] 移除旧签名...${NC}"
find "$APP_PATH" -name "*.app" -type d -exec rm -rf {}/_CodeSignature \; 2>/dev/null || true
rm -rf "$APP_PATH/_CodeSignature" 2>/dev/null || true

echo -e "${YELLOW}[5/7] 签名所有Framework...${NC}"
find "$APP_PATH/Frameworks" -name "*.dylib" -o -name "*.framework" 2>/dev/null | while read FRAMEWORK; do
    echo "  签名: $FRAMEWORK"
    codesign -f -s "$CERT_NAME" "$FRAMEWORK" 2>/dev/null || true
done

echo -e "${YELLOW}[6/7] 签名应用...${NC}"
codesign -f -s "$CERT_NAME" --entitlements "$ENTITLEMENTS_PATH" "$APP_PATH"

echo -e "${YELLOW}[7/7] 重打包...${NC}"
OUTPUT_IPA="$OUTPUT_DIR/${APP_NAME}_signed.ipa"
cd "$TEMP_DIR"
zip -qr "../$OUTPUT_IPA" Payload
cd - > /dev/null

rm -rf "$TEMP_DIR"

echo -e "${GREEN}========================================${NC}"
echo -e "${GREEN}签名完成!${NC}"
echo -e "${GREEN}========================================${NC}"
echo -e "输出文件: ${GREEN}$OUTPUT_IPA${NC}"
