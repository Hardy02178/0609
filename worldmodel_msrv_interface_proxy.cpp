/// @file
///
/// @author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
///
/// This file is generated. Do not edit!
#include "eb/lotus/worldmodel_msrv/worldmodel_msrv_interface_proxy.h"
#include <utility>
#include "ara/com/com_error_domain.h"
#include "ac/com/cpp_binding/proxy/event_defs.hpp"
#include "ac/com/cpp_binding/proxy/proxy_defs.hpp"

namespace ac
{
  namespace com
  {
    namespace cpp_binding
    {
      namespace proxy
      {
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_EgoPoseManager_MLALocalization_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_Fusion_AEBResult_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_Fusion_ObjectResult_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_MapManager_Horizon_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_ParkingFusion_GroundLineResult_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_ParkingFusion_ObjectResult_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_Perception_ADASPerception_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_Perception_MLocPerception_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_Perception_RoadLinePerception_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_SensorService_MLAGnss_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_WorldModel_ADBTrafficCondition_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_WorldModel_ADBTrafficSign_Struct>;
        template class Event<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface::Events::Event_WorldModel_TrafficLightPerception_Struct>;
        template class Proxy<::eb::lotus::worldmodel_msrv::WorldModel_MSrv_Interface>;
      } // namespace proxy
    } // namespace cpp_binding
  } // namespace com
} // namespace ac

namespace eb
{

  namespace lotus
  {

    namespace worldmodel_msrv
    {

      namespace proxy
      {
        WorldModel_MSrv_InterfaceProxy::WorldModel_MSrv_InterfaceProxy(HandleType const& handle)
        : Proxy<WorldModel_MSrv_Interface>{handle}
        , Event_EgoPoseManager_MLALocalization_Struct{port_link()}
        , Event_Fusion_AEBResult_Struct{port_link()}
        , Event_Fusion_ObjectResult_Struct{port_link()}
        , Event_MapManager_Horizon_Struct{port_link()}
        , Event_ParkingFusion_GroundLineResult_Struct{port_link()}
        , Event_ParkingFusion_ObjectResult_Struct{port_link()}
        , Event_Perception_ADASPerception_Struct{port_link()}
        , Event_Perception_MLocPerception_Struct{port_link()}
        , Event_Perception_RoadLinePerception_Struct{port_link()}
        , Event_SensorService_MLAGnss_Struct{port_link()}
        , Event_WorldModel_ADBTrafficCondition_Struct{port_link()}
        , Event_WorldModel_ADBTrafficSign_Struct{port_link()}
        , Event_WorldModel_TrafficLightPerception_Struct{port_link()}
        {
        }

        WorldModel_MSrv_InterfaceProxy::~WorldModel_MSrv_InterfaceProxy() noexcept
        {
          ::ac::com::cpp_binding::proxy::Proxy<WorldModel_MSrv_Interface>::close();
        }

        WorldModel_MSrv_InterfaceProxy::WorldModel_MSrv_InterfaceProxy(WorldModel_MSrv_InterfaceProxy&& /*other*/) noexcept = default;
        WorldModel_MSrv_InterfaceProxy& WorldModel_MSrv_InterfaceProxy::operator=(WorldModel_MSrv_InterfaceProxy&& /*other*/) & noexcept = default;

        ::ara::core::Result<WorldModel_MSrv_InterfaceProxy::ConstructionToken>
        WorldModel_MSrv_InterfaceProxy::Preconstruct(HandleType const& handle) noexcept
        {
          try
          {
            return ConstructionToken{handle};
          }
          catch (...)
          {
            return ::ara::core::Result<ConstructionToken>::FromError(
            ::ara::com::ComErrc::Network_binding_failure);
          }
        }

      } // namespace proxy
    } // namespace worldmodel_msrv
  } // namespace lotus
} // namespace eb
