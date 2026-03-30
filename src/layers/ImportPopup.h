#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>
#include <Geode/ui/TextInput.hpp>
#include <Geode/ui/FilePickEventFilter.hpp>
#include <matjson.hpp>
#include <sstream>

using namespace geode::prelude;

class ImportPopup : public geode::Popup<cocos2d::CCArray*>, public TextInputDelegate {
protected:
    int m_zOrder = 0;
    int m_objsCount = 0;
    float m_drawScale = 1;
    matjson::Value m_jsonSets;
    std::ostringstream m_objsString;
    GameObject* m_centerObj = nullptr;
    TextInput* m_zLayerInput = nullptr;
    CCLabelBMFont* m_fileLabel = nullptr;
    CCLabelBMFont* m_countLabel = nullptr;
    TextInput* m_drawScaleInput = nullptr;
    EventListener<Task<Result<std::filesystem::path>>::Event> m_pickListener;  // ADDcos2d::CCArray*>, public TextInputDelegate {
protected:
    int m_zOrder = 0;
    int m_objsCount = 0;
    float m_drawScale = 1;
    matjson::Value m_jsonSets;
    std::ostringstream m_objsString;
    GameObject* m_centerObj = nullptr;
    TextInput* m_zLayerInput = nullptr;
    CCLabelBMFont* m_fileLabel = nullptr;
    CCLabelBMFont* m_countLabel = nullptr;
    TextInput* m_drawScaleInput = nullptr;
    EventListener<Task<Result<std::filesystem::path>>::Event> m_pickListener; // ADD THIS LINE
    static constexpr int m_CircleId = 497;
    static constexpr int m_SquareId = 495;
    const std::set<int> m_squareTypes = {0, 1, 2};
    const std::set<int> m_validTypes = {5, 3, 4, 32, 8, 16};
    static constexpr CCSize m_popupSize = CCSize(385.f, 245.f);
protected:
    void parse`:**
